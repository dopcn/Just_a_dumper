//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBCBaseItem.h"

@class NSString;

@interface TBCHomeSelectionPostItem : TBCBaseItem
{
    NSString *_forumId;
    NSString *_title;
    NSString *_abstract;
    NSString *_replyNumber;
    NSString *_forumName;
    NSString *_userName;
    NSString *_postType;
    NSString *_publishTime;
    NSString *_rankProper;
    NSString *_imageUrl;
    NSString *_linkString;
}

@property(retain, nonatomic) NSString *linkString; // @synthesize linkString=_linkString;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(retain, nonatomic) NSString *rankProper; // @synthesize rankProper=_rankProper;
@property(retain, nonatomic) NSString *publishTime; // @synthesize publishTime=_publishTime;
@property(retain, nonatomic) NSString *postType; // @synthesize postType=_postType;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSString *forumName; // @synthesize forumName=_forumName;
@property(retain, nonatomic) NSString *replyNumber; // @synthesize replyNumber=_replyNumber;
@property(retain, nonatomic) NSString *abstract; // @synthesize abstract=_abstract;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *forumId; // @synthesize forumId=_forumId;
- (void)dealloc;
- (void)addJsonToPropertyMappingRules;
- (id)init;

@end

