//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NMVAViewControl.h"

#import "AMAPLayerDelegate-Protocol.h"
#import "AMAPPoiLayerRenderDatasource-Protocol.h"
#import "NMMicrophoneViewDelegate-Protocol.h"
#import "NMNetworkStatusChangeDelegate-Protocol.h"
#import "NMVASearchResultViewDataSource-Protocol.h"
#import "NMVASearchResultViewDelegate-Protocol.h"

@class LTMAOSPoiData, MPSQueryPoiData, NMMicrophoneView, NMToastView, NMVASearchResultView, NSArray, NSString;

@interface NMVAVoiceSearchResultViewControl : NMVAViewControl <NMMicrophoneViewDelegate, NMVASearchResultViewDelegate, NMVASearchResultViewDataSource, NMNetworkStatusChangeDelegate, AMAPLayerDelegate, AMAPPoiLayerRenderDatasource>
{
    _Bool _isResume;
    NMMicrophoneView *_microphoneView;
    NMVASearchResultView *_searchResultView;
    long long _state;
    LTMAOSPoiData *_data;
    long long _page;
    NSArray *_layerData;
    NMToastView *_toastView;
    long long _selectedIndex;
    long long _retryTimes;
    double _microphoneLastClickTime;
}

@property(nonatomic) _Bool isResume; // @synthesize isResume=_isResume;
@property(nonatomic) double microphoneLastClickTime; // @synthesize microphoneLastClickTime=_microphoneLastClickTime;
@property(nonatomic) long long retryTimes; // @synthesize retryTimes=_retryTimes;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) NMToastView *toastView; // @synthesize toastView=_toastView;
@property(retain, nonatomic) NSArray *layerData; // @synthesize layerData=_layerData;
@property(nonatomic) long long page; // @synthesize page=_page;
@property(retain, nonatomic) LTMAOSPoiData *data; // @synthesize data=_data;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) NMVASearchResultView *searchResultView; // @synthesize searchResultView=_searchResultView;
- (void).cxx_destruct;
- (void)applicationWillResignActive:(id)arg1 manager:(id)arg2;
- (void)networkStatusChanged:(long long)arg1 newStatus:(long long)arg2;
- (void)apLayerHighlightedIndex:(long long)arg1 layerTye:(long long)arg2;
- (id)apLayerData:(long long)arg1;
- (_Bool)poiLayerShouldRenderPoiName;
- (void)listDidScroll;
- (void)closeAnimationFinished;
- (void)closeAnimationStart;
- (void)cancelSearching;
- (void)nextPageDidClick;
- (void)previousPageDidClick;
- (void)setButtonDidClick;
- (void)naviButtonDidClickWithIndex:(long long)arg1;
- (void)cellSecondHighlightedWithIndex:(long long)arg1;
- (void)cellHighlightedWithIndex:(long long)arg1;
- (void)avatarDidClick;
- (long long)vaSearchResultViewCurrentSelectedIndex;
- (_Bool)vaSearchResultViewCurrentPageIsLastPage;
- (long long)vaSearchResultViewCurrentPageIndex;
- (id)vaSearchResultViewListData;
- (void)micBtnPressed:(id)arg1;
- (void)speechRecognizer:(id)arg1 completed:(id)arg2;
- (void)speechRecognizer:(id)arg1 part:(id)arg2;
- (void)speechRecognizer:(id)arg1 volumeChanged:(double)arg2;
- (void)speechRecognizer:(id)arg1 error:(id)arg2;
- (void)speechRecognizerWillPlaySound:(id)arg1;
- (void)requsetFinishWithTask:(id)arg1;
- (void)receiveVoiceSearchTask:(id)arg1;
- (void)receiveSelectIndexCommandTask:(id)arg1;
- (void)receiveRoadConditionCommandTask:(id)arg1;
- (void)receiveZoomMapCommandTask:(id)arg1;
- (void)receiveNaviTask:(id)arg1;
- (void)receiveRouteTask:(id)arg1;
- (void)receiveAssistantTask:(id)arg1;
- (void)receiveGoHomeIncTask:(id)arg1;
- (void)receiveSearchTask:(id)arg1;
- (void)receiveRoadConditonTask:(id)arg1;
- (void)receiveTask:(id)arg1;
- (void)receiveUnknownTask:(id)arg1;
- (void)receiveNilTask;
- (void)dismissAnimated:(_Bool)arg1;
- (void)viewWillPause;
- (void)showAnimated:(_Bool)arg1;
- (void)resumeAnimated:(_Bool)arg1 withData:(id)arg2;
- (void)createUIIfNeed;
- (void)loadView;
- (void)setParams:(id)arg1;
- (void)removeNavigationNotification;
- (void)addNavigationNotification;
- (void)updateRobotText:(id)arg1;
- (void)startNavigationWithPOI:(id)arg1;
- (void)movePOIToCenterWithIndex:(long long)arg1;
- (id)viewRegionWithString:(id)arg1;
- (void)reloadLayer;
- (void)reloadViewRegion;
- (void)exitNavigationNotification:(id)arg1;
- (void)startNavigationNotification:(id)arg1;
@property(readonly, nonatomic) NMMicrophoneView *microphoneView; // @synthesize microphoneView=_microphoneView;
@property(readonly, nonatomic) MPSQueryPoiData *myLocationPOI;
@property(readonly, nonatomic) NSString *avatarURL;
- (id)initWithParentView:(id)arg1 manager:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

