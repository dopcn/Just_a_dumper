//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TBCRepostRecommendForumReqItem : NSObject
{
    NSString *_title;
    NSString *_content;
    NSString *_forumID;
    NSString *_forumName;
}

@property(copy, nonatomic) NSString *forumName; // @synthesize forumName=_forumName;
@property(copy, nonatomic) NSString *forumID; // @synthesize forumID=_forumID;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 content:(id)arg2 forumID:(id)arg3 forumName:(id)arg4;

@end

