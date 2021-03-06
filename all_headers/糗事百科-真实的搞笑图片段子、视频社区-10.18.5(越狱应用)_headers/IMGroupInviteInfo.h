//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GroupInfoDetailModel, NSDictionary, NSString;

@interface IMGroupInviteInfo : NSObject
{
    NSString *_detail;
    NSString *_title;
    unsigned long long _type;
    GroupInfoDetailModel *_groupInfo;
    long long _isApplied;
    NSDictionary *_dict;
}

@property(retain, nonatomic) NSDictionary *dict; // @synthesize dict=_dict;
@property(nonatomic) long long isApplied; // @synthesize isApplied=_isApplied;
@property(retain, nonatomic) GroupInfoDetailModel *groupInfo; // @synthesize groupInfo=_groupInfo;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *detail; // @synthesize detail=_detail;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *jsonString;
- (id)initWithDict:(id)arg1;

@end

