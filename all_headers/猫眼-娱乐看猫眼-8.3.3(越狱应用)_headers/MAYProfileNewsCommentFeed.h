//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MAYProfileFeed.h"

@class NSArray, NSString;

@interface MAYProfileNewsCommentFeed : MAYProfileFeed
{
    long long _newsCommentId;
    NSString *_text;
    long long _upCount;
    long long _commentCount;
    long long _newsId;
    NSString *_newsTitle;
    NSArray *_images;
}

@property(retain, nonatomic) NSArray *images; // @synthesize images=_images;
@property(retain, nonatomic) NSString *newsTitle; // @synthesize newsTitle=_newsTitle;
@property(nonatomic) long long newsId; // @synthesize newsId=_newsId;
@property(nonatomic) long long commentCount; // @synthesize commentCount=_commentCount;
@property(nonatomic) long long upCount; // @synthesize upCount=_upCount;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) long long newsCommentId; // @synthesize newsCommentId=_newsCommentId;
- (void).cxx_destruct;
- (id)item;
- (id)init;

@end

