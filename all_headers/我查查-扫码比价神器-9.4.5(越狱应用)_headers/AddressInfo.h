//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AddressInfo : NSObject
{
    _Bool _isDefault;
    NSString *_strAdid;
    NSString *_strName;
    NSString *_strPhone;
    NSString *_strCityID;
    NSString *_strCityName;
    NSString *_strProvinceName;
    NSString *_strAddress;
}

@property _Bool isDefault; // @synthesize isDefault=_isDefault;
@property(retain, nonatomic) NSString *strAddress; // @synthesize strAddress=_strAddress;
@property(retain, nonatomic) NSString *strProvinceName; // @synthesize strProvinceName=_strProvinceName;
@property(retain, nonatomic) NSString *strCityName; // @synthesize strCityName=_strCityName;
@property(retain, nonatomic) NSString *strCityID; // @synthesize strCityID=_strCityID;
@property(retain, nonatomic) NSString *strPhone; // @synthesize strPhone=_strPhone;
@property(retain, nonatomic) NSString *strName; // @synthesize strName=_strName;
@property(retain, nonatomic) NSString *strAdid; // @synthesize strAdid=_strAdid;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

