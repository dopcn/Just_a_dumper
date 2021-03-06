//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

#import "JDBaseToastViewDelegate-Protocol.h"
#import "JDCoreStorySearchMiddleDelegate-Protocol.h"

@class CommuneCategoryDetailModel, CommuneCategoryPublishAnswerSubmitView, CommuneCategoryPublishAnswerTextView, CommuneCategoryPublishDao, JDBaseToastView, NSMutableArray, NSString, PublishToastView, UITableView, UITableViewCell;

@interface CommuneCategoryPublishAnswerViewController : JDViewController <JDBaseToastViewDelegate, JDCoreStorySearchMiddleDelegate>
{
    JDBaseToastView *_toastView;
    UITableViewCell *_tempDeleteProductCell;
    PublishToastView *_toast;
    CommuneCategoryPublishDao *_publishAnswerDao;
    _Bool _isShowProductButton;
    _Bool _voiceSwitch;
    _Bool _isVoiceInput;
    _Bool _requestComplete;
    _Bool _pageLoaded;
    CommuneCategoryDetailModel *_detailModel;
    NSString *_categoryID;
    NSString *_categoryName;
    NSString *_maxLenght;
    NSString *_minLenght;
    NSString *_tip;
    CommuneCategoryPublishAnswerTextView *_communeText;
    CommuneCategoryPublishAnswerSubmitView *_SubmitView;
    NSMutableArray *_productArray;
    UITableView *_productTableView;
    long long _voiceTextCount;
}

@property(nonatomic) _Bool pageLoaded; // @synthesize pageLoaded=_pageLoaded;
@property(nonatomic) _Bool requestComplete; // @synthesize requestComplete=_requestComplete;
@property(nonatomic) long long voiceTextCount; // @synthesize voiceTextCount=_voiceTextCount;
@property(nonatomic) _Bool isVoiceInput; // @synthesize isVoiceInput=_isVoiceInput;
@property(retain, nonatomic) UITableView *productTableView; // @synthesize productTableView=_productTableView;
@property(retain, nonatomic) NSMutableArray *productArray; // @synthesize productArray=_productArray;
@property(retain, nonatomic) CommuneCategoryPublishAnswerSubmitView *SubmitView; // @synthesize SubmitView=_SubmitView;
@property(retain, nonatomic) CommuneCategoryPublishAnswerTextView *communeText; // @synthesize communeText=_communeText;
@property(nonatomic) _Bool voiceSwitch; // @synthesize voiceSwitch=_voiceSwitch;
@property(copy, nonatomic) NSString *tip; // @synthesize tip=_tip;
@property(copy, nonatomic) NSString *minLenght; // @synthesize minLenght=_minLenght;
@property(copy, nonatomic) NSString *maxLenght; // @synthesize maxLenght=_maxLenght;
@property(copy, nonatomic) NSString *categoryName; // @synthesize categoryName=_categoryName;
@property(nonatomic) _Bool isShowProductButton; // @synthesize isShowProductButton=_isShowProductButton;
@property(copy, nonatomic) NSString *categoryID; // @synthesize categoryID=_categoryID;
@property(retain, nonatomic) CommuneCategoryDetailModel *detailModel; // @synthesize detailModel=_detailModel;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)didReceiveMemoryWarning;
- (void)showOptionToast;
- (void)resetPosition;
- (void)changePosition:(double)arg1;
- (void)keyboardFrameChange:(id)arg1;
- (id)currentNavigationController;
- (void)loginAndOpenUserCenter;
- (void)enterUserCeter;
- (void)poptoCommuneList;
- (void)didFinishInToastView:(id)arg1;
- (void)popToast:(long long)arg1 message:(id)arg2 messagelist:(id)arg3;
- (void)resetTableView;
- (void)startSearch:(id)arg1;
- (void)showVoiceView;
- (void)submitPublish;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)changeTableViewFrame;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

