//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface SNPMYOUTHCommentDTO : NSObject
{
    NSString *_createTime;
    NSString *_contentID;
    NSString *_nick;
    long long _floorLevel;
    NSString *_targetCommentID;
    NSString *_userFaceUrl;
    NSString *_targetUserID;
    NSString *_targetUserNick;
    NSString *_contentUserID;
    NSString *_targetComment;
    NSString *_userID;
    NSString *_targetCreateTime;
    NSString *_commentID;
    NSString *_comment;
}

+ (id)parser:(id)arg1;
@property(retain, nonatomic) NSString *comment; // @synthesize comment=_comment;
@property(retain, nonatomic) NSString *commentID; // @synthesize commentID=_commentID;
@property(retain, nonatomic) NSString *targetCreateTime; // @synthesize targetCreateTime=_targetCreateTime;
@property(retain, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(retain, nonatomic) NSString *targetComment; // @synthesize targetComment=_targetComment;
@property(retain, nonatomic) NSString *contentUserID; // @synthesize contentUserID=_contentUserID;
@property(retain, nonatomic) NSString *targetUserNick; // @synthesize targetUserNick=_targetUserNick;
@property(retain, nonatomic) NSString *targetUserID; // @synthesize targetUserID=_targetUserID;
@property(retain, nonatomic) NSString *userFaceUrl; // @synthesize userFaceUrl=_userFaceUrl;
@property(retain, nonatomic) NSString *targetCommentID; // @synthesize targetCommentID=_targetCommentID;
@property(nonatomic) long long floorLevel; // @synthesize floorLevel=_floorLevel;
@property(retain, nonatomic) NSString *nick; // @synthesize nick=_nick;
@property(retain, nonatomic) NSString *contentID; // @synthesize contentID=_contentID;
@property(retain, nonatomic) NSString *createTime; // @synthesize createTime=_createTime;
- (void).cxx_destruct;

@end

