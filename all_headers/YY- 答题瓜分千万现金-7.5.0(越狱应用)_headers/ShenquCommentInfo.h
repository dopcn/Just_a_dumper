//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSAttributedString, NSDate, NSString;

@interface ShenquCommentInfo : NSObject
{
    _Bool _isZan;
    _Bool _isHot;
    unsigned int _uid;
    long long _comid;
    NSString *_userName;
    NSString *_comContent;
    long long _likeCount;
    unsigned long long _sendVideoTime;
    NSDate *_cdate;
    NSString *_logoIndex;
    NSString *_logoURL;
    NSString *_correctIndex;
    NSString *_beCommentNick;
    NSAttributedString *_attrComContent;
    NSArray *_uidList;
}

@property(retain, nonatomic) NSArray *uidList; // @synthesize uidList=_uidList;
@property(retain, nonatomic) NSAttributedString *attrComContent; // @synthesize attrComContent=_attrComContent;
@property(retain, nonatomic) NSString *beCommentNick; // @synthesize beCommentNick=_beCommentNick;
@property(retain, nonatomic) NSString *correctIndex; // @synthesize correctIndex=_correctIndex;
@property(nonatomic) _Bool isHot; // @synthesize isHot=_isHot;
@property(retain, nonatomic) NSString *logoURL; // @synthesize logoURL=_logoURL;
@property(retain, nonatomic) NSString *logoIndex; // @synthesize logoIndex=_logoIndex;
@property(retain, nonatomic) NSDate *cdate; // @synthesize cdate=_cdate;
@property(nonatomic) unsigned long long sendVideoTime; // @synthesize sendVideoTime=_sendVideoTime;
@property(nonatomic) long long likeCount; // @synthesize likeCount=_likeCount;
@property(nonatomic) _Bool isZan; // @synthesize isZan=_isZan;
@property(retain, nonatomic) NSString *comContent; // @synthesize comContent=_comContent;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(nonatomic) long long comid; // @synthesize comid=_comid;
@property(nonatomic) unsigned int uid; // @synthesize uid=_uid;
- (void).cxx_destruct;

@end

