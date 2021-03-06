//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NICellObject.h"

@class NSArray, NSNumber, NSString;

@interface CMPiazzaListCellObject : NICellObject
{
    _Bool _isPraise;
    _Bool _isModerator;
    _Bool _isLast;
    NSNumber *_topicId;
    NSString *_content;
    NSString *_createTime;
    NSNumber *_snsId;
    NSNumber *_commentCount;
    NSNumber *_praiseCount;
    NSString *_nickName;
    NSString *_faceUrl;
    NSString *_rankName;
    NSString *_rankIcon;
    NSArray *_imageList;
    double _height;
    NSNumber *_piazzaId;
    unsigned long long _piazzaType;
    NSNumber *_gender;
    NSString *_title;
}

@property(nonatomic) _Bool isLast; // @synthesize isLast=_isLast;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool isModerator; // @synthesize isModerator=_isModerator;
@property(retain, nonatomic) NSNumber *gender; // @synthesize gender=_gender;
@property(nonatomic) unsigned long long piazzaType; // @synthesize piazzaType=_piazzaType;
@property(retain, nonatomic) NSNumber *piazzaId; // @synthesize piazzaId=_piazzaId;
@property(nonatomic) _Bool isPraise; // @synthesize isPraise=_isPraise;
@property(nonatomic) double height; // @synthesize height=_height;
@property(retain, nonatomic) NSArray *imageList; // @synthesize imageList=_imageList;
@property(retain, nonatomic) NSString *rankIcon; // @synthesize rankIcon=_rankIcon;
@property(retain, nonatomic) NSString *rankName; // @synthesize rankName=_rankName;
@property(retain, nonatomic) NSString *faceUrl; // @synthesize faceUrl=_faceUrl;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSNumber *praiseCount; // @synthesize praiseCount=_praiseCount;
@property(retain, nonatomic) NSNumber *commentCount; // @synthesize commentCount=_commentCount;
@property(retain, nonatomic) NSNumber *snsId; // @synthesize snsId=_snsId;
@property(retain, nonatomic) NSString *createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSNumber *topicId; // @synthesize topicId=_topicId;
- (void).cxx_destruct;
- (void)setPiazzaListCellObject:(id)arg1 piazzaId:(id)arg2 piazzaType:(unsigned long long)arg3;
- (Class)cellClass;

@end

