//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBPageBaseRequest.h"

@class NSString;

@interface MIBrandTuanSearchRequest : MBPageBaseRequest
{
    NSString *_url;
}

@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)setApiUrl:(id)arg1;
- (void)setTimeSlotId:(id)arg1;
- (void)setPageSize:(long long)arg1;
- (void)setPage:(long long)arg1;
- (id)getStaticURL;
- (id)getType;
- (id)getHttpType;
- (id)getMethod;

@end

