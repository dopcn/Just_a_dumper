//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RMCommonContext.h"

@class NSString, RMGetResultResponse;

@interface RMSetStatusContext : RMCommonContext
{
    RMGetResultResponse *response;
    NSString *placeData;
}

+ (id)placeJsonStr:(id)arg1 place_name:(id)arg2 gLatitude:(id)arg3 gLongitude:(id)arg4 pLatitude:(id)arg5 pLongitude:(id)arg6 place_location:(id)arg7 privacy:(id)arg8 locate_type:(int)arg9 d:(int)arg10;
@property(copy, nonatomic) NSString *placeData; // @synthesize placeData;
- (id)getContextResponse;
- (void)generateResponse;
- (BOOL)synSetStatus:(id)arg1 error:(id *)arg2;
- (void)asynSetStatus:(id)arg1;
- (void)didCancelLoad;
- (void)didFailLoadWithError:(id)arg1;
- (void)didFinishLoad;
- (void)didStartLoad;
- (void)dealloc;
- (id)init;

@end

