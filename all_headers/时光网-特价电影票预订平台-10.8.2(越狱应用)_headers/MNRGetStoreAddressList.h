//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MNBRequest.h"

@class NSString;

@interface MNRGetStoreAddressList : MNBRequest
{
    NSString *_stringSkuList;
}

@property(copy, nonatomic) NSString *stringSkuList; // @synthesize stringSkuList=_stringSkuList;
- (void).cxx_destruct;
- (id)requestArgument;
- (id)requestUrl;
- (id)init;

@end

