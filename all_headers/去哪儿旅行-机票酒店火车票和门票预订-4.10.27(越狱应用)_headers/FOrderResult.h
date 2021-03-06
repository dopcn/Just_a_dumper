//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SearchNetResult.h"

@class FOrderDetailResult, FOrderSubmitResult, FSilentRefreshResult, NSString;

@interface FOrderResult : SearchNetResult
{
    FOrderDetailResult *_orderDetailData;
    FOrderSubmitResult *_submitData;
    NSString *_traceId;
    FSilentRefreshResult *_silentRefresh;
}

@property(readonly, nonatomic, getter=silentRefresh) FSilentRefreshResult *silentRefresh; // @synthesize silentRefresh=_silentRefresh;
@property(retain, nonatomic, getter=traceId) NSString *traceId; // @synthesize traceId=_traceId;
@property(retain, nonatomic, getter=fOrderSubmitResult) FOrderSubmitResult *submitData; // @synthesize submitData=_submitData;
@property(retain, nonatomic, getter=fOrderDetailResult) FOrderDetailResult *orderDetailData; // @synthesize orderDetailData=_orderDetailData;
- (void).cxx_destruct;

@end

