//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SAKDomainObject.h"

@class NSString;

@interface HTLRoomInfo : SAKDomainObject
{
    NSString *_roomType;
    NSString *_name;
    unsigned long long _roomStatus;
    NSString *_date;
}

+ (id)predicateDictionary;
@property(retain, nonatomic) NSString *date; // @synthesize date=_date;
@property(nonatomic) unsigned long long roomStatus; // @synthesize roomStatus=_roomStatus;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *roomType; // @synthesize roomType=_roomType;
- (void).cxx_destruct;

@end

