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
#include "DetailsTool.h"
#include "SSCSEditor.h"
#include "Widgets/Input/SSearchBox.h"
#include "Widgets/Text/STextBlock.h"
#include "Misc/TextFilter.h"

#include <Editor/DetailsCommon.h>

namespace HPathUtility {
	FORCEINLINE static size_t Strcpy(char* Destination, const char* Source, size_t Length);
	FORCEINLINE static size_t Strlen(const char* Source);
}

namespace GameDriverColumns { struct IColumn; }

class DetailsToolPanel : public SCompoundWidget
{

	SLATE_BEGIN_ARGS(DetailsToolPanel)
	{}

	SLATE_ARGUMENT(TWeakPtr<class DetailsTool>, Tool)

		SLATE_END_ARGS()

	void Construct(const FArguments& InArgs);
	void MakeDetailSubMenu(FMenuBuilder& menuBuilder);
	~DetailsToolPanel();

	void OnSelectionChanged(TSharedPtr < FString>  Entry, ESelectInfo::Type SelectInfo) ;

	void OnSCSEditorTreeViewSelectionChanged(const TArray<TSharedPtr<class FSCSEditorTreeNode> >& SelectedNodes);
	void RegisterSubMenu(UToolMenu* InMenu, FToolMenuSection* InSection);
public:
	void OnEditorSelectionChanged(UObject* Object);
	TSharedPtr<SWidget> OnConstructContextMenu();

	TSharedPtr<SWidget> GetContextMenu();
	void DetailCommand(FString* type);
	void DetailCommand1();
	void DetailCommand2();
	void MapCommands();


protected:


	TSharedPtr<DetailsCommonToolPanel> CommonPanel;
	UObject* lockedObject;
	UActorComponent* lockedComponent;
	FProperty* lockedField;
	UFunction* lockedMethod;
	TWeakPtr<DetailsTool> tool;
	TSharedPtr<IDetailsView> DetailsView;
	TSharedPtr<class SSCSEditor> SCSEditor;
	TArray<TSharedPtr<FString>>  Components;
	TArray <UActorComponent*> RawComponents;

	TSharedPtr<FUICommandList> CommandList;
	RightMenuContexts menuContext;


	/* The actual UI list */
	TSharedPtr< SListView< TSharedPtr<FString> > > ComponentViewWidget;

	
	/** Property viewing widget */
	TSharedPtr<IDetailsView> PropertyView;

	TSharedPtr<SBorder> hideableBorder;

	TSharedPtr<SBorder> errorMessage;
	/** Customize how the component tree looks like */
	TSharedPtr<class ISCSEditorUICustomization> SCSEditorUICustomization;

	/** The first actor in the currently selected objects */
	AActor* SelectedActor;
	/** The splitter that divides object properties and components tree */
	TSharedPtr<SSplitter> DetailsSplitter;
	/** Border widget that wraps a dynamic context-sensitive widget for editing objects that the property window is displaying */
	TSharedPtr<SBorder> ContextualEditingBorderWidget;


};