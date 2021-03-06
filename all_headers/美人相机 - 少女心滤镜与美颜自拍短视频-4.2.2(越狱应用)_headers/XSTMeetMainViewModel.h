//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XSTPageViewModel.h"

@class NSURLSessionTask, XSTMeetBannerModel;

@interface XSTMeetMainViewModel : XSTPageViewModel
{
    _Bool _isRefresh;
    XSTMeetBannerModel *_bannerModel;
    long long _requestTime;
    NSURLSessionTask *_viewpagerOperation;
}

@property(retain, nonatomic) NSURLSessionTask *viewpagerOperation; // @synthesize viewpagerOperation=_viewpagerOperation;
@property(nonatomic) _Bool isRefresh; // @synthesize isRefresh=_isRefresh;
@property(nonatomic) long long requestTime; // @synthesize requestTime=_requestTime;
@property(retain, nonatomic) XSTMeetBannerModel *bannerModel; // @synthesize bannerModel=_bannerModel;
- (void).cxx_destruct;
- (void)requestBannerDataWithSuccess:(CDUnknownBlockType)arg1 fail:(CDUnknownBlockType)arg2;
- (void)cancelLoad;
- (id)modelWithJsonObject:(id)arg1;
- (id)pageJsonObjectsWithResult:(id)arg1;
- (id)requestParam;
- (id)init;

@end

