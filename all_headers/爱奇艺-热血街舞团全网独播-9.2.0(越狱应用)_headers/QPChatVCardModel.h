//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYPPJsonData.h"

@class NSNumber, NSString;

@interface QPChatVCardModel : QYPPJsonData
{
    NSNumber *_verify;
    NSString *_icon;
    NSString *_name;
    NSString *_desc;
    NSString *_paopaoId;
    NSString *_pingyin;
    NSNumber *_subjectType;
    NSNumber *_officialType;
    NSNumber *_maxMemberCount;
}

+ (_Bool)propertyIsOptional:(id)arg1;
+ (id)keyMapper;
@property(retain, nonatomic) NSNumber *maxMemberCount; // @synthesize maxMemberCount=_maxMemberCount;
@property(retain, nonatomic) NSNumber *officialType; // @synthesize officialType=_officialType;
@property(retain, nonatomic) NSNumber *subjectType; // @synthesize subjectType=_subjectType;
@property(copy, nonatomic) NSString *pingyin; // @synthesize pingyin=_pingyin;
@property(copy, nonatomic) NSString *paopaoId; // @synthesize paopaoId=_paopaoId;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSNumber *verify; // @synthesize verify=_verify;
- (void).cxx_destruct;

@end

