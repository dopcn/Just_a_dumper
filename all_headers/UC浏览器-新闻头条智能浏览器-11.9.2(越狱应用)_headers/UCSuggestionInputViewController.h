//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SMSearchFindingURLSugDelegate-Protocol.h"
#import "UCSuggestionCellDelegate-Protocol.h"
#import "UCSuggestionInputDelegate-Protocol.h"
#import "UCSuggestionSearchFindingCellDelegate-Protocol.h"
#import "UCUTPageProtocol-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UCSuggestionInputDataManager, UCSuggestionSearchFindingItem, UIAlertView, UIButton, UIImageView, UILabel, UITableView, UIView;
@protocol SuggestionInputViewControllerDelegate;

@interface UCSuggestionInputViewController : UIViewController <UCSuggestionInputDelegate, UITableViewDelegate, UITableViewDataSource, UIAlertViewDelegate, UCSuggestionCellDelegate, UCSuggestionSearchFindingCellDelegate, SMSearchFindingURLSugDelegate, UCUTPageProtocol>
{
    _Bool _isCancel;
    _Bool _hadShowURLFieldTip;
    _Bool _hadShowSearchFieldTip;
    _Bool _isCheckDragEnd;
    id <SuggestionInputViewControllerDelegate> _delegate;
    UCSuggestionInputDataManager *_suggestionInputDataManager;
    long long _textFieldType;
    UITableView *_suggestionInputTableView;
    UIButton *_maskView;
    UIView *_fakeBackgroundView;
    NSMutableArray *_suggestionInputDataArray;
    NSString *_inputText;
    UIButton *_clearButton;
    UIView *_wallPaperView;
    UILabel *_tipLabel;
    UIImageView *_tipSeperatorLine;
    UIAlertView *_clearHistoryAlertView;
    UCSuggestionSearchFindingItem *_sfitem;
    NSMutableArray *_suggestionDissDataArr;
    UIView *_topbarSuperView;
    UIView *_usedtopbar;
    struct CGRect _frame;
}

@property(retain, nonatomic) UIView *usedtopbar; // @synthesize usedtopbar=_usedtopbar;
@property(retain, nonatomic) UIView *topbarSuperView; // @synthesize topbarSuperView=_topbarSuperView;
@property(nonatomic) _Bool isCheckDragEnd; // @synthesize isCheckDragEnd=_isCheckDragEnd;
@property(retain, nonatomic) NSMutableArray *suggestionDissDataArr; // @synthesize suggestionDissDataArr=_suggestionDissDataArr;
@property(retain, nonatomic) UCSuggestionSearchFindingItem *sfitem; // @synthesize sfitem=_sfitem;
@property(retain, nonatomic) UIAlertView *clearHistoryAlertView; // @synthesize clearHistoryAlertView=_clearHistoryAlertView;
@property(nonatomic) _Bool hadShowSearchFieldTip; // @synthesize hadShowSearchFieldTip=_hadShowSearchFieldTip;
@property(nonatomic) _Bool hadShowURLFieldTip; // @synthesize hadShowURLFieldTip=_hadShowURLFieldTip;
@property(retain, nonatomic) UIImageView *tipSeperatorLine; // @synthesize tipSeperatorLine=_tipSeperatorLine;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UIView *wallPaperView; // @synthesize wallPaperView=_wallPaperView;
@property(retain, nonatomic) UIButton *clearButton; // @synthesize clearButton=_clearButton;
@property(retain, nonatomic) NSString *inputText; // @synthesize inputText=_inputText;
@property(retain, nonatomic) NSMutableArray *suggestionInputDataArray; // @synthesize suggestionInputDataArray=_suggestionInputDataArray;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(retain, nonatomic) UIView *fakeBackgroundView; // @synthesize fakeBackgroundView=_fakeBackgroundView;
@property(retain, nonatomic) UIButton *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UITableView *suggestionInputTableView; // @synthesize suggestionInputTableView=_suggestionInputTableView;
@property(nonatomic) long long textFieldType; // @synthesize textFieldType=_textFieldType;
@property(retain, nonatomic) UCSuggestionInputDataManager *suggestionInputDataManager; // @synthesize suggestionInputDataManager=_suggestionInputDataManager;
@property(nonatomic) id <SuggestionInputViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isCancel; // @synthesize isCancel=_isCancel;
- (id)pageName;
- (id)spmBPoint;
- (id)spmAPoint;
- (void)onURLSugUpdated:(id)arg1;
- (void)didSwitchToDeleteMode;
- (void)deleteOneSearchFindingTag:(id)arg1 pos:(long long)arg2;
- (void)tagJumpToWeb:(id)arg1 url:(id)arg2 pos:(long long)arg3;
- (void)deleteAllSearchFindingTags;
- (unsigned long long)countSuggestions;
- (long long)searchEntranceType;
- (void)updateDataManager;
- (void)viewWillLayoutSubviews;
- (int)characteristicValueForShowedListByBit;
- (int)severDataCount;
- (void)updateTipsResult;
- (void)didMaskClicked:(id)arg1;
- (void)didThemeChange;
- (void)subButtonClickedInCell:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (long long)currentLisType;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)clearHistory:(id)arg1;
- (void)updateTableFootView;
- (void)updateMaskView;
- (void)updateViews;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)shouldSearchTip;
- (_Bool)shouldURLTip;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)utStatisticsSearchCSuggestionInputItem:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)heightForUCSuggestionInputItem:(id)arg1;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)onUCSuggestionInputDataChange:(id)arg1;
- (void)notifyCloseFinish;
- (void)closeViewWithAnimation:(_Bool)arg1;
- (void)showMaskViewAnimated;
- (void)showInViewWithAnimation:(id)arg1 topbar:(id)arg2;
- (void)showInView:(id)arg1 withAnimation:(_Bool)arg2;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)utStatisticsKeySearchFrom;
- (void)viewDidLoad;
- (id)addUCSuggestionInputItem:(id)arg1;
- (void)triggerURLSug:(id)arg1;
- (void)setMatchInputText:(id)arg1;
- (void)doThemeChange;
- (void)willAnimateRotationToInterfaceOrientation;
- (void)setBackgroundViewStyle;
- (void)loadView;
- (void)dealloc;
- (id)initWithTextFieldType:(long long)arg1 textFieldActiveFromType:(long long)arg2 frame:(struct CGRect)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

