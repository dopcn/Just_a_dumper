//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GJUIViewController.h"

@class GJUCShareManager;

@interface GJHRShareViewController : GJUIViewController
{
    GJUCShareManager *_shareManager;
    double _shareViewHeight;
    CDUnknownBlockType _shareClickCallBack;
    unsigned long long _from;
    unsigned long long _myShareType;
}

@property(nonatomic) unsigned long long myShareType; // @synthesize myShareType=_myShareType;
@property(nonatomic) unsigned long long from; // @synthesize from=_from;
@property(copy, nonatomic) CDUnknownBlockType shareClickCallBack; // @synthesize shareClickCallBack=_shareClickCallBack;
@property(nonatomic) double shareViewHeight; // @synthesize shareViewHeight=_shareViewHeight;
@property(retain, nonatomic) GJUCShareManager *shareManager; // @synthesize shareManager=_shareManager;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)logWithID:(id)arg1 shareIndex:(long long)arg2;
- (void)gotoShareWinXinQuan;
- (void)gotoShareWinXin;
- (void)gotoShareWeiBo;
- (void)gotoShareQQZone;
- (void)gotoShareQQ;
- (void)gotoMessage;
- (void)gotoCopy;
- (void)gotoIMGroup;
- (void)gotoIMFriend;
- (void)dismissViewController;
- (void)sendAction:(unsigned long long)arg1;
- (void)initShareViewWithTypeArray:(id)arg1;
- (void)shareWithType:(unsigned long long)arg1;
- (void)shareSuccess;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithShareData:(id)arg1 shareTypeArray:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

