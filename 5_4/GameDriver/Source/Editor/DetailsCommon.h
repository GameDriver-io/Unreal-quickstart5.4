// Copyright GameDriver, Inc. All Rights Reserved.
#include "Widgets/Input/SSearchBox.h"
#include "Widgets/Text/STextBlock.h"
#include "Misc/TextFilter.h"

#pragma once

enum RightMenuContexts { COMPONENT, METHOD, FIELD, SLATEITEM };
DECLARE_LOG_CATEGORY_EXTERN(LogGameDriverEditor, Log, All);


class DetailsCommonToolPanel : public SCompoundWidget {

	SLATE_BEGIN_ARGS(DetailsCommonToolPanel)
		{}

		SLATE_ARGUMENT(TWeakPtr<class SCompoundWidget>, Tool)

	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs);
	void MakeDetailSubMenu(FMenuBuilder& menuBuilder);
	//~DetailsCommonToolPanel();
	TSharedRef<ITableRow> OnGenerateRowForField(TSharedPtr<FString> InItem, const TSharedRef<STableViewBase>& OwnerTable);

	TSharedRef<ITableRow> OnGenerateRowForMethod(TSharedPtr<FString> InItem, const TSharedRef<STableViewBase>& OwnerTable);
	//void OnSelectionChanged(TSharedPtr < FString>  Entry, ESelectInfo::Type SelectInfo);
	void OnFieldSelectionChanged(TSharedPtr < FString>  Entry, ESelectInfo::Type SelectInfo);
	void OnMethodSelectionChanged(TSharedPtr < FString>  Entry, ESelectInfo::Type SelectInfo);
	//void OnSCSEditorTreeViewSelectionChanged(const TArray<TSharedPtr<class FSCSEditorTreeNode> >& SelectedNodes);
	void RegisterSubMenu(UToolMenu* InMenu, FToolMenuSection* InSection);

public:
	TSharedPtr<SWidget> OnConstructContextMenu();
	TSharedPtr<SWidget> OnConstructContextMenuField();
	TSharedPtr<SWidget> OnConstructContextMenuMethod();
	TSharedPtr<SWidget> GetContextMenu();
	void RefreshExtraDetailsPanel(bool comp = false);
	void OnSearchTextCommitted(const FText& InFilterText, ETextCommit::Type CommitType);
	void OnSearchTextChanged(const FText& InFilterText);
	void OnMethodSearchTextCommitted(const FText& InFilterText, ETextCommit::Type CommitType);
	void OnMethodSearchTextChanged(const FText& InFilterText);

	EColumnSortMode::Type GetFieldColumnSortMode(const FName ColumnId) const;
	float GetFieldColumnWidth(const FName ColumnId) const;
	void OnFieldColumnSortModeChanged(const EColumnSortPriority::Type SortPriority, const FName& ColumnId, const EColumnSortMode::Type InSortMode);
	void OnFieldColumnWidthChanged(const float NewWidth, FName ColumnId) const;
	void SortField(const FName& ColumnId);
	void SyncFields();
	void ResetSort();

	EColumnSortMode::Type GetMethodColumnSortMode(const FName ColumnId) const;
	float GetMethodColumnWidth(const FName ColumnId) const;
	void OnMethodColumnSortModeChanged(const EColumnSortPriority::Type SortPriority, const FName& ColumnId, const EColumnSortMode::Type InSortMode);
	void OnMethodColumnWidthChanged(const float NewWidth, FName ColumnId) const;
	void SortMethods(const FName& ColumnId);
	void SyncMethods();
	FString GetFunctionReturnValue(UFunction* func);
	void DetailCommand(FString* type);
	void DetailCommandHPath();
	void DetailCommandDetails();
	void DetailCommandRelative();
	void MapCommands();
	void ClearLists();
	bool isTypeValid(FProperty* p);
	FString GetCSharpType(FProperty* p);
	void FilterFields();
	void FilterMethods();

	void UpdateInterface();

	UObject* lockedObject;
	UActorComponent* lockedComponent;
	FProperty* lockedField;
	UFunction* lockedMethod;
	/*
	void SetLockedObject(UObject* x) { lockedObject = x; };

	void SetLockedComponenet(UActorComponent* x) { lockedComponent = x; };
	void SetLockedField(FProperty* x) { lockedField = x; };
	void SetLockedMethod(UFunction* x) { lockedMethod = x; };

	*/


	//search related fields
	TSharedPtr<SSearchBox> SearchBox;
	TSharedPtr<SSearchBox> MethodSearchBox;
	RightMenuContexts menuContext;
protected:


	FString SearchedText;
	FString MethodSearchedText;
//	TWeakPtr<DetailsTool> tool;
	TSharedPtr<IDetailsView> DetailsView; 
	TArray<TSharedPtr<FString>> Methods;
	TArray<TSharedPtr<FString>> MethodsToDisplay;
	TArray<UFunction*> RawMethods;
	TArray<TSharedPtr<FString>> Fields;
	TArray<TSharedPtr<FString>> FieldsToDisplay;
	TArray<FProperty*> RawFields;
	TSharedPtr<FUICommandList> CommandList;


private:
	//Header related fields
	EColumnSortMode::Type FieldSortMode = EColumnSortMode::Ascending;
	FName FieldSortColumn = "";
	TArray<float>* FieldColumnWidths;// = { 100.0,100.0 };

	EColumnSortMode::Type MethodSortMode = EColumnSortMode::Ascending;
	FName MethodSortColumn = "";
	TArray<float>* MethodColumnWidths;// = { 100.0,100.0 };


	TSharedPtr< SListView< TSharedPtr<FString> > > FieldViewWidget;
	TSharedPtr< SListView< TSharedPtr<FString> > > MethodViewWidget;

	/** The splitter that divides object properties and components tree */
	TSharedPtr<SSplitter> DetailsSplitter;
	/** Border widget that wraps a dynamic context-sensitive widget for editing objects that the property window is displaying */
	TSharedPtr<SBorder> ContextualEditingBorderWidget;

};