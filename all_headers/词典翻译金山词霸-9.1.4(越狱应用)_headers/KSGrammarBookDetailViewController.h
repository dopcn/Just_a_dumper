//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSBaseViewController.h"

#import "KSAudioPlayerDelegate-Protocol.h"
#import "KSBookDetailNextChapterControllerDelegate-Protocol.h"
#import "KSGBChooseOrFillBlankViewControllerDelegate-Protocol.h"
#import "KSGrammarBookCatalogueDelegate-Protocol.h"
#import "KSGrammarBookPageViewControllerDelegate-Protocol.h"
#import "KSIAPLoginTipViewDelegate-Protocol.h"
#import "KSReadingBookLoadingViewDelegate-Protocol.h"
#import "KSSelectWordHelperDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UIPageViewControllerDataSource-Protocol.h"
#import "UIPageViewControllerDelegate-Protocol.h"

@class KSAudioPlayer, KSBookDetailViewModel, KSNovelAudioInfo, KSNovelReadProgress, KSNovelReadingPageAudioView, KSReadingAudioDownloadHelper, KSReadingBookLoadingView, KSReadingBookManager, KSSingleThinLabel, NSLayoutConstraint, NSMutableArray, NSString, NSTimer, UIButton, UIImageView, UILabel, UIPageViewController, UISlider, UISwitch, UIView;

@interface KSGrammarBookDetailViewController : KSBaseViewController <UIPageViewControllerDelegate, UIPageViewControllerDataSource, UIAlertViewDelegate, KSSelectWordHelperDelegate, KSIAPLoginTipViewDelegate, KSReadingBookLoadingViewDelegate, KSAudioPlayerDelegate, KSGrammarBookPageViewControllerDelegate, KSBookDetailNextChapterControllerDelegate, KSGrammarBookCatalogueDelegate, KSGBChooseOrFillBlankViewControllerDelegate>
{
    _Bool _readProgressFromRecord;
    long long _pageIndexForQueryWord;
    _Bool _needLayout;
    UIView *_topView;
    UIView *_contentView;
    UIView *_bottomView;
    NSLayoutConstraint *_bottomViewBottomConstraint;
    NSLayoutConstraint *_bottomViewHeightConstraint;
    KSNovelAudioInfo *_novelAudioInfo;
    KSAudioPlayer *_audioPlayer;
    KSBookDetailViewModel *_viewModel;
    UIPageViewController *_pageViewController;
    NSLayoutConstraint *_topViewTop;
    NSLayoutConstraint *_topViewHeightConstraint;
    UIButton *_backButtonInTopView;
    UIButton *_showConfigViewButton;
    UIView *_settingView;
    UIView *_audioView;
    UIImageView *_catalogImageView;
    UILabel *_catalogLabel;
    UIImageView *_wordImageView;
    UILabel *_addWordLabel;
    UILabel *_settingLabel;
    UIImageView *_settingImageView;
    UILabel *_audioLabel;
    UIView *_settingDetailView;
    UIView *_settingFontView;
    UIView *_settingProtectView;
    UIView *_settingBackView;
    UILabel *_settingFontViewTitleLabel;
    UISlider *_fontSlider;
    UIImageView *_settingMinusImageView;
    UIImageView *_settingPlusView;
    UILabel *_settingProtectViewLabel;
    UISwitch *_protectModelSwitch;
    UILabel *_protectStatusLabel;
    UILabel *_settingFontViewSeparateLabel;
    UILabel *_settingProtectViewSeparateLabel;
    UILabel *_audioPlayLeftLabel;
    UILabel *_audioPlayRightLabel;
    UIView *_audioDetailView;
    UIView *_audioDetailViewBackView;
    UIView *_audioDetailViewDownloadView;
    UIView *_audioDetailViewPlayView;
    UILabel *_audioDownloadViewTitleLabel;
    UILabel *_audioDownloadViewSizeLabel;
    UIButton *_audioDownloadButton;
    UIButton *_audioPlayButton;
    UISlider *_audioPlaySlider;
    UIView *_bottomAudioAnimationView;
    UIButton *_quickPlayButton;
    NSLayoutConstraint *_audioDownloadViewBottomConstraint;
    UIView *_topProgressView;
    UILabel *_topProgressTitleLabel;
    UILabel *_topProgressLabel;
    UILabel *_topViewBookNameLabel;
    KSSingleThinLabel *_lineLabel;
    KSNovelReadingPageAudioView *_novelReadingAudioView;
    KSReadingBookManager *_bookManager;
    long long _currentPage;
    long long _totalPage;
    NSString *_userID;
    NSTimer *_timer;
    KSNovelReadProgress *_readProgress;
    KSReadingAudioDownloadHelper *_audioDownloadHelper;
    KSReadingBookLoadingView *_readingLoadView;
    NSMutableArray *_userQueryWords;
    NSMutableArray *_catalogueArray;
    long long _currentCatalogue;
    long long _lastAviliableBlock;
    NSString *_complateRate;
    long long _downloadAudioTryAgainCount;
    NSLayoutConstraint *_quickPlayButtonBottom;
    NSLayoutConstraint *_contentViewTop;
    NSLayoutConstraint *_topProgressViewTop;
}

@property(nonatomic) __weak NSLayoutConstraint *topProgressViewTop; // @synthesize topProgressViewTop=_topProgressViewTop;
@property(nonatomic) __weak NSLayoutConstraint *contentViewTop; // @synthesize contentViewTop=_contentViewTop;
@property(nonatomic) __weak NSLayoutConstraint *quickPlayButtonBottom; // @synthesize quickPlayButtonBottom=_quickPlayButtonBottom;
@property(nonatomic) long long downloadAudioTryAgainCount; // @synthesize downloadAudioTryAgainCount=_downloadAudioTryAgainCount;
@property(copy, nonatomic) NSString *complateRate; // @synthesize complateRate=_complateRate;
@property(nonatomic) long long lastAviliableBlock; // @synthesize lastAviliableBlock=_lastAviliableBlock;
@property(nonatomic) long long currentCatalogue; // @synthesize currentCatalogue=_currentCatalogue;
@property(retain, nonatomic) NSMutableArray *catalogueArray; // @synthesize catalogueArray=_catalogueArray;
@property(retain, nonatomic) NSMutableArray *userQueryWords; // @synthesize userQueryWords=_userQueryWords;
@property(retain, nonatomic) KSReadingBookLoadingView *readingLoadView; // @synthesize readingLoadView=_readingLoadView;
@property(retain, nonatomic) KSReadingAudioDownloadHelper *audioDownloadHelper; // @synthesize audioDownloadHelper=_audioDownloadHelper;
@property(retain, nonatomic) KSNovelReadProgress *readProgress; // @synthesize readProgress=_readProgress;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(nonatomic) long long totalPage; // @synthesize totalPage=_totalPage;
@property(nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
@property(retain, nonatomic) KSReadingBookManager *bookManager; // @synthesize bookManager=_bookManager;
@property(retain, nonatomic) KSNovelReadingPageAudioView *novelReadingAudioView; // @synthesize novelReadingAudioView=_novelReadingAudioView;
@property(nonatomic) __weak KSSingleThinLabel *lineLabel; // @synthesize lineLabel=_lineLabel;
@property(nonatomic) __weak UILabel *topViewBookNameLabel; // @synthesize topViewBookNameLabel=_topViewBookNameLabel;
@property(nonatomic) __weak UILabel *topProgressLabel; // @synthesize topProgressLabel=_topProgressLabel;
@property(nonatomic) __weak UILabel *topProgressTitleLabel; // @synthesize topProgressTitleLabel=_topProgressTitleLabel;
@property(nonatomic) __weak UIView *topProgressView; // @synthesize topProgressView=_topProgressView;
@property(nonatomic) __weak NSLayoutConstraint *audioDownloadViewBottomConstraint; // @synthesize audioDownloadViewBottomConstraint=_audioDownloadViewBottomConstraint;
@property(nonatomic) __weak UIButton *quickPlayButton; // @synthesize quickPlayButton=_quickPlayButton;
@property(nonatomic) __weak UIView *bottomAudioAnimationView; // @synthesize bottomAudioAnimationView=_bottomAudioAnimationView;
@property(nonatomic) __weak UISlider *audioPlaySlider; // @synthesize audioPlaySlider=_audioPlaySlider;
@property(nonatomic) __weak UIButton *audioPlayButton; // @synthesize audioPlayButton=_audioPlayButton;
@property(nonatomic) __weak UIButton *audioDownloadButton; // @synthesize audioDownloadButton=_audioDownloadButton;
@property(nonatomic) __weak UILabel *audioDownloadViewSizeLabel; // @synthesize audioDownloadViewSizeLabel=_audioDownloadViewSizeLabel;
@property(nonatomic) __weak UILabel *audioDownloadViewTitleLabel; // @synthesize audioDownloadViewTitleLabel=_audioDownloadViewTitleLabel;
@property(nonatomic) __weak UIView *audioDetailViewPlayView; // @synthesize audioDetailViewPlayView=_audioDetailViewPlayView;
@property(nonatomic) __weak UIView *audioDetailViewDownloadView; // @synthesize audioDetailViewDownloadView=_audioDetailViewDownloadView;
@property(nonatomic) __weak UIView *audioDetailViewBackView; // @synthesize audioDetailViewBackView=_audioDetailViewBackView;
@property(retain, nonatomic) UIView *audioDetailView; // @synthesize audioDetailView=_audioDetailView;
@property(nonatomic) __weak UILabel *audioPlayRightLabel; // @synthesize audioPlayRightLabel=_audioPlayRightLabel;
@property(nonatomic) __weak UILabel *audioPlayLeftLabel; // @synthesize audioPlayLeftLabel=_audioPlayLeftLabel;
@property(nonatomic) __weak UILabel *settingProtectViewSeparateLabel; // @synthesize settingProtectViewSeparateLabel=_settingProtectViewSeparateLabel;
@property(nonatomic) __weak UILabel *settingFontViewSeparateLabel; // @synthesize settingFontViewSeparateLabel=_settingFontViewSeparateLabel;
@property(nonatomic) __weak UILabel *protectStatusLabel; // @synthesize protectStatusLabel=_protectStatusLabel;
@property(nonatomic) __weak UISwitch *protectModelSwitch; // @synthesize protectModelSwitch=_protectModelSwitch;
@property(nonatomic) __weak UILabel *settingProtectViewLabel; // @synthesize settingProtectViewLabel=_settingProtectViewLabel;
@property(nonatomic) __weak UIImageView *settingPlusView; // @synthesize settingPlusView=_settingPlusView;
@property(nonatomic) __weak UIImageView *settingMinusImageView; // @synthesize settingMinusImageView=_settingMinusImageView;
@property(nonatomic) __weak UISlider *fontSlider; // @synthesize fontSlider=_fontSlider;
@property(nonatomic) __weak UILabel *settingFontViewTitleLabel; // @synthesize settingFontViewTitleLabel=_settingFontViewTitleLabel;
@property(nonatomic) __weak UIView *settingBackView; // @synthesize settingBackView=_settingBackView;
@property(nonatomic) __weak UIView *settingProtectView; // @synthesize settingProtectView=_settingProtectView;
@property(nonatomic) __weak UIView *settingFontView; // @synthesize settingFontView=_settingFontView;
@property(retain, nonatomic) UIView *settingDetailView; // @synthesize settingDetailView=_settingDetailView;
@property(nonatomic, getter=isNeedLayout) _Bool needLayout; // @synthesize needLayout=_needLayout;
@property(nonatomic) __weak UILabel *audioLabel; // @synthesize audioLabel=_audioLabel;
@property(nonatomic) __weak UIImageView *settingImageView; // @synthesize settingImageView=_settingImageView;
@property(nonatomic) __weak UILabel *settingLabel; // @synthesize settingLabel=_settingLabel;
@property(nonatomic) __weak UILabel *addWordLabel; // @synthesize addWordLabel=_addWordLabel;
@property(nonatomic) __weak UIImageView *wordImageView; // @synthesize wordImageView=_wordImageView;
@property(nonatomic) __weak UILabel *catalogLabel; // @synthesize catalogLabel=_catalogLabel;
@property(nonatomic) __weak UIImageView *catalogImageView; // @synthesize catalogImageView=_catalogImageView;
@property(nonatomic) __weak UIView *audioView; // @synthesize audioView=_audioView;
@property(nonatomic) __weak UIView *settingView; // @synthesize settingView=_settingView;
@property(nonatomic) __weak UIButton *showConfigViewButton; // @synthesize showConfigViewButton=_showConfigViewButton;
@property(nonatomic) __weak UIButton *backButtonInTopView; // @synthesize backButtonInTopView=_backButtonInTopView;
@property(nonatomic) __weak NSLayoutConstraint *topViewHeightConstraint; // @synthesize topViewHeightConstraint=_topViewHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *topViewTop; // @synthesize topViewTop=_topViewTop;
@property(retain, nonatomic) UIPageViewController *pageViewController; // @synthesize pageViewController=_pageViewController;
@property(retain, nonatomic) KSBookDetailViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) KSAudioPlayer *audioPlayer; // @synthesize audioPlayer=_audioPlayer;
@property(retain, nonatomic) KSNovelAudioInfo *novelAudioInfo; // @synthesize novelAudioInfo=_novelAudioInfo;
@property(nonatomic) __weak NSLayoutConstraint *bottomViewHeightConstraint; // @synthesize bottomViewHeightConstraint=_bottomViewHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *bottomViewBottomConstraint; // @synthesize bottomViewBottomConstraint=_bottomViewBottomConstraint;
@property(nonatomic) __weak UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(nonatomic) __weak UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak UIView *topView; // @synthesize topView=_topView;
- (void).cxx_destruct;
- (void)readingBookLoadingView:(id)arg1 didClickCancelAction:(id)arg2;
- (void)saveAndUploadStudyRecordWithTotalChapterCount:(id)arg1 currentChpater:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewControllerViewTaped;
- (void)nextChapterButtonClickWithRecordModel:(id)arg1;
- (void)preChapterButtonClickWithRecordModel:(id)arg1;
- (void)nextPageButtonClickWithRecordModel:(id)arg1 lastPage:(_Bool)arg2;
- (void)prePageButtonClickWithRecordModel:(id)arg1 firstPage:(_Bool)arg2;
- (void)jumpPositionWithModel:(id)arg1;
- (void)showConfigView;
- (void)novelViewController:(id)arg1 selecteWordHelper:(id)arg2 selectedWord:(id)arg3;
- (void)novelViewController:(id)arg1 touchesBegan:(id)arg2 withEvent:(id)arg3;
- (void)novelViewController:(id)arg1 setAssistantViewHidden:(_Bool)arg2 animated:(_Bool)arg3;
- (void)onLinkTextClicked:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)selectWordHelper:(id)arg1 didSelectWord:(id)arg2;
- (void)downloadAudioWithURLString:(id)arg1 tempFilePath:(id)arg2 targetFilePath:(id)arg3;
- (void)onAudioPlaySliderTouchUpInside:(id)arg1;
- (void)onAudioPlaySliderValueChanged:(id)arg1;
- (void)onAudioDownloadButtonClicked:(id)arg1;
- (void)onAudioPlayButtonClicked:(id)arg1;
- (void)onBottomCertificateButtonClicked:(id)arg1;
- (void)onQuickPlayButtonClicked:(id)arg1;
- (void)onFontMinusButtonClicked:(id)arg1;
- (void)onFontPlusButtonClicked:(id)arg1;
- (void)onSwitchValueChanged:(id)arg1;
- (void)onSettingButtonClicked:(id)arg1;
- (void)jumpToCataloguePage;
- (void)onCatalogButtonClicked:(id)arg1;
- (void)onBuyButtonClicked:(id)arg1;
- (void)back:(id)arg1;
- (void)setUpAudioPlayer;
- (void)onBottomAudioButtonClicked:(id)arg1;
- (void)buyGood;
- (void)IAPLoginTipView:(id)arg1 unloginBuyButtonClick:(id)arg2;
- (void)IAPLoginTipView:(id)arg1 loginBuyButtonClick:(id)arg2;
- (void)localBookDataAnalysizeError:(id)arg1;
- (void)stopTimer;
- (void)startTimer;
- (void)timerHandle;
- (void)showAlterController;
- (void)handlePage;
- (void)popViewController;
- (void)buyBookSuccess:(id)arg1;
- (void)removeSettingDetailView;
- (void)onSliderValueChanged:(id)arg1;
- (void)removeAudioDetailView;
- (void)loadPreviousChapter;
- (void)loadNextChapter;
- (void)setAssistantViewHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setAssistantViewAutoHiddenWithAnimated:(_Bool)arg1;
- (void)setup;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (void)setUpTopProgressViewValue:(double)arg1 chapterName:(id)arg2;
- (void)pageViewController:(id)arg1 didFinishAnimating:(_Bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(_Bool)arg4;
- (long long)pageViewController:(id)arg1 spineLocationForInterfaceOrientation:(long long)arg2;
- (_Bool)judgeChapterWithAudioFileWithIndex:(long long)arg1;
- (void)handlePageWithDirector:(long long)arg1 reloadViewModel:(_Bool)arg2 animated:(_Bool)arg3;
- (void)setTheme;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

