//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ZYBIMApi.h"

@class NSString;
@protocol Optional;

@interface ZDImGroupCoursegrouplistGrouplistItem : ZYBIMApi
{
    id <Optional> _extension;
    NSString *_groupName;
    NSString *_groupNum;
    long long _groupId;
    long long _isMember;
    NSString *_groupAvatar;
}

@property(copy, nonatomic) NSString *groupAvatar; // @synthesize groupAvatar=_groupAvatar;
@property(nonatomic) long long isMember; // @synthesize isMember=_isMember;
@property(nonatomic) long long groupId; // @synthesize groupId=_groupId;
@property(copy, nonatomic) NSString *groupNum; // @synthesize groupNum=_groupNum;
@property(copy, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(retain, nonatomic) id <Optional> extension; // @synthesize extension=_extension;
- (void).cxx_destruct;

@end

