//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SNHHZBaseRequest.h"

@class SNHHZBabyFormatDto;

@interface SNHHZGetPageNewRequest : SNHHZBaseRequest
{
    SNHHZBabyFormatDto *_babyInfo;
    CDUnknownBlockType _hhzNewsRequestBlock;
}

@property(copy, nonatomic) CDUnknownBlockType hhzNewsRequestBlock; // @synthesize hhzNewsRequestBlock=_hhzNewsRequestBlock;
- (void).cxx_destruct;
- (void)parseItem:(id)arg1;
- (void)requestDidCompleted;
- (void)requestDidFailed;
- (id)requestArgument;
- (long long)requestMethod;
- (id)requestUrl;
- (void)queryNewByAge:(id)arg1;
- (id)formacAgeArea:(id)arg1;

@end

