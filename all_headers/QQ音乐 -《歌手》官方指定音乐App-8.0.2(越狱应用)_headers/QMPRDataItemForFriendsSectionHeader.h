//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QMPRDataItemBase.h"

@class NSString;

@interface QMPRDataItemForFriendsSectionHeader : QMPRDataItemBase
{
    _Bool _needShowChangeButton;
    NSString *_friendNick;
    NSString *_friendUin;
    NSString *_avatarUrl;
    NSString *_changeTitle;
    unsigned long long _dataInfoType;
}

@property(nonatomic) _Bool needShowChangeButton; // @synthesize needShowChangeButton=_needShowChangeButton;
@property(nonatomic) unsigned long long dataInfoType; // @synthesize dataInfoType=_dataInfoType;
@property(retain, nonatomic) NSString *changeTitle; // @synthesize changeTitle=_changeTitle;
@property(retain, nonatomic) NSString *avatarUrl; // @synthesize avatarUrl=_avatarUrl;
@property(retain, nonatomic) NSString *friendUin; // @synthesize friendUin=_friendUin;
@property(retain, nonatomic) NSString *friendNick; // @synthesize friendNick=_friendNick;
- (void).cxx_destruct;
- (Class)cellClass;

@end

