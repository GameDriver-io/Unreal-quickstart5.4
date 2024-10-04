// Copyright GameDriver, Inc. All Rights Reserved.
#pragma once

#if ENGINE_MAJOR_VERSION == 4
#include "Widgets/Docking/SDockTab.h"
#include "Widgets/Docking/SDockableTab.h"
#include "Widgets/Docking/SDockTabStack.h"
#include "Widgets/Text/SRichTextBlock.h"
#endif
#include "Framework/Application/SlateApplication.h"
#include "ISCSEditorUICustomization.h"
#include "SlateExplorerTool.h"

#include "SSCSEditor.h"
#include "Widgets/Input/SSearchBox.h"
#include "Misc/TextFilter.h"

#include <Editor/DetailsCommon.h>


namespace GameDriverColumns { struct IColumn; }

namespace SlateColumns
{
	static const FName Type("Type");
	static const FName Name("Name");
	static const FName Value("Value");
};

namespace HPathUtility {
	FORCEINLINE static size_t Strcpy(char* Destination, const char* Source, size_t Length);
	FORCEINLINE static size_t Strlen(const char* Source);
}

class SlateObjectHolder {
public:
	SlateObjectHolder(UObject* o) { name = o->GetName(); object = o; };
	FString name;
	FString hpath;
	UObject* object;
	TArray<TSharedPtr<SlateObjectHolder>> Children;
	TSharedPtr<SlateObjectHolder> Parent;
};

class SlateExplorerToolPanel : public SCompoundWidget
{

	SLATE_BEGIN_ARGS(SlateExplorerToolPanel)
	{}

	SLATE_ARGUMENT(TWeakPtr<class SlateExplorerTool>, Tool)

		SLATE_END_ARGS()

		void refreshWorldSource();
		void ExpandSlateExplorerItem(TSharedPtr<SlateObjectHolder>& fella);
		FReply refreshWorldSourceClick();
		void loadUpChildren(TSharedPtr<SlateObjectHolder> ttt,int level,TArray<TSharedPtr<SlateObjectHolder>>* matchingFellers);
		void printDebug(int level, UObject* name);
		void Construct(const FArguments& InArgs);

		void TickWorld(UWorld* World, ELevelTick TickType, float DeltaSeconds);
	void MakeDetailSubMenu(FMenuBuilder& menuBuilder);
	void MakeDetailSubMenuNoDetail(FMenuBuilder& menuBuilder);
	bool SelfOrChildrenContain(UObject* o, FString s, int level);
	~SlateExplorerToolPanel();
	void RegisterSubMenu(UToolMenu* InMenu, FToolMenuSection* InSection);
public:
	int numUserWidgets = 0;
	void OnSlateSelectionChanged(TSharedPtr<SlateObjectHolder> InItem, ESelectInfo::Type InSelectInfo);
	TSharedPtr<SWidget> OnConstructContextMenu();
	TSharedPtr<SWidget> OnConstructContextMenuField();
	TSharedPtr<SWidget> OnConstructContextMenuMethod();
	TSharedPtr<SWidget> GetContextMenu();
	void DetailCommand(FString* type);
	void DetailCommandHPath();
	void DetailCommandDetails();
	void DetailCommandRelative();
	void MapCommands();
FString InjectBold(FString raw, bool& wasFound);

	void FilterWidgets();

	void OnWidgetSearchTextCommitted(const FText& InFilterText, ETextCommit::Type CommitType);
	void OnWidgetSearchTextChanged(const FText& InFilterText);
	// Generate a row widget for an item
	TSharedRef<ITableRow> HandleGenerateRow(TSharedPtr<SlateObjectHolder> Item, const TSharedRef<STableViewBase>& OwnerTable);

	void HandleGetChildren(TSharedPtr<SlateObjectHolder> InItem, TArray<TSharedPtr<SlateObjectHolder>>& OutChildren);
	void WorldChanged(UWorld* World, const UWorld::InitializationValues InitializationValues);
	void OnSetExpansionRecursive(TSharedPtr<SlateObjectHolder>  InItem, bool bShouldBeExpanded);
	void SetExpansionRecursive(TSharedPtr<SlateObjectHolder>  InElement, bool bShouldBeExpanded);

protected:
	bool refreshing;
	TSharedPtr<DetailsCommonToolPanel> CommonPanel;
	FTimerHandle RefreshingTimerHandle;
	UObject* lockedObject;
	UActorComponent* lockedComponent;
	FProperty* lockedField;
	UFunction* lockedMethod;
	TWeakPtr<SlateExplorerTool> tool;
	TSharedPtr<IDetailsView> DetailsView;
	TSharedPtr<STreeView<TSharedPtr<SlateObjectHolder>>> SlateTree;
	TArray<TSharedPtr<SlateObjectHolder>> SlateObjects;
	TArray<TSharedPtr<FString>>  Components;
	TArray <UActorComponent*> RawComponents;
	TArray<TSharedPtr<FString>> Methods;
	TArray<TSharedPtr<FString>> MethodsToDisplay;
	TArray<UFunction*> RawMethods;
	TArray<TSharedPtr<FString>> Fields;
	TArray<TSharedPtr<FString>> FieldsToDisplay;
	TArray<FProperty*> RawFields;
	TSharedPtr<FUICommandList> CommandList;
	RightMenuContexts menuContext;

	//search related fields
	TSharedPtr<SSearchBox> SearchBox;

	FString WidgetSearchedText;


	/** The first actor in the currently selected objects */
	UObject* SelectedWidget;
	/** The splitter that divides object properties and components tree */
	TSharedPtr<SSplitter> DetailsSplitter;
	/** Border widget that wraps a dynamic context-sensitive widget for editing objects that the property window is displaying */
	TSharedPtr<SBorder> ContextualEditingBorderWidget;

	FDelegateHandle worldChangedDelegate;

};