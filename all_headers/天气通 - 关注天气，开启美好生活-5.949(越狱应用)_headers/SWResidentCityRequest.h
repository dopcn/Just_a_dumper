//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SWBaseRequest.h"

@class NSString;

@interface SWResidentCityRequest : SWBaseRequest
{
    NSString *_citycode;
    NSString *_luid;
}

+ (void)getResidentCityFromServerWithCityCode:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failedBlock:(CDUnknownBlockType)arg3;
@property(copy, nonatomic) NSString *luid; // @synthesize luid=_luid;
@property(copy, nonatomic) NSString *citycode; // @synthesize citycode=_citycode;
- (void).cxx_destruct;
- (void)dealloc;
- (id)requestUrl;

@end

