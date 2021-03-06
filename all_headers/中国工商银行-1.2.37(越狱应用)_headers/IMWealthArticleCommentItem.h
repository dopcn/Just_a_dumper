//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface IMWealthArticleCommentItem : NSObject
{
    NSString *userId;
    NSString *commentId;
    NSString *articleId;
    NSString *barId;
    NSString *commentTxt;
    NSString *commentTime;
    long long commentPraiseCount;
    long long subCommentCount;
}

@property(nonatomic) long long subCommentCount; // @synthesize subCommentCount;
@property(nonatomic) long long commentPraiseCount; // @synthesize commentPraiseCount;
@property(retain, nonatomic) NSString *commentTime; // @synthesize commentTime;
@property(retain, nonatomic) NSString *commentTxt; // @synthesize commentTxt;
@property(retain, nonatomic) NSString *barId; // @synthesize barId;
@property(retain, nonatomic) NSString *articleId; // @synthesize articleId;
@property(retain, nonatomic) NSString *commentId; // @synthesize commentId;
@property(retain, nonatomic) NSString *userId; // @synthesize userId;
- (void).cxx_destruct;

@end

