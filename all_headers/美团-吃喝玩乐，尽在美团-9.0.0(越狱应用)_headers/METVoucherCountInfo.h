//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SAKDomainObject.h"

@interface METVoucherCountInfo : SAKDomainObject
{
    long long _userID;
    unsigned long long _totalCount;
    unsigned long long _availableCount;
    unsigned long long _newAddedCount;
}

+ (id)predicateDictionary;
@property(nonatomic) unsigned long long newAddedCount; // @synthesize newAddedCount=_newAddedCount;
@property(nonatomic) unsigned long long availableCount; // @synthesize availableCount=_availableCount;
@property(nonatomic) unsigned long long totalCount; // @synthesize totalCount=_totalCount;
@property(nonatomic) long long userID; // @synthesize userID=_userID;

@end

