//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KFViewController.h"

#import "KTVSelectedAccVLLDelegate-Protocol.h"

@class KTVSelectedAccVLL, KTVSelectedAccVM, KTVSelectedAccompanyView, NSString;

@interface KTVSelectedAccVC : KFViewController <KTVSelectedAccVLLDelegate>
{
    KTVSelectedAccompanyView *_seletedAccView;
    KTVSelectedAccVM *_seletedAccVM;
    KTVSelectedAccVLL *_seletedAccVLL;
}

@property(retain, nonatomic) KTVSelectedAccVLL *seletedAccVLL; // @synthesize seletedAccVLL=_seletedAccVLL;
@property(retain, nonatomic) KTVSelectedAccVM *seletedAccVM; // @synthesize seletedAccVM=_seletedAccVM;
@property(retain, nonatomic) KTVSelectedAccompanyView *seletedAccView; // @synthesize seletedAccView=_seletedAccView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)selectedAccVllJumpToSearch:(id)arg1;
- (void)goSingSong;
- (void)selectedAccVll:(id)arg1 beginSingAccInfo:(id)arg2;
- (void)selectedAccViewIntoRecord:(id)arg1 selectedCellAccInfo:(id)arg2;
- (void)selectedAccVll:(id)arg1 selectedCellAccInfo:(id)arg2 isChorus:(_Bool)arg3;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)showSeletedView;
- (void)creatSeletedView;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (long long)showPlayBarWay;
- (void)KTVUsingControllerState:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

