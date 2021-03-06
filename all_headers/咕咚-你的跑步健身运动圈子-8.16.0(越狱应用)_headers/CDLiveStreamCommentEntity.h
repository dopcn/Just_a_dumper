//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIColor;

@interface CDLiveStreamCommentEntity : NSObject
{
    NSString *_name;
    NSString *_comment;
    NSString *_userId;
    UIColor *_nameColor;
    UIColor *_commentColor;
    double _totalHeight;
}

@property(nonatomic) double totalHeight; // @synthesize totalHeight=_totalHeight;
@property(retain, nonatomic) UIColor *commentColor; // @synthesize commentColor=_commentColor;
@property(retain, nonatomic) UIColor *nameColor; // @synthesize nameColor=_nameColor;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(copy, nonatomic) NSString *comment; // @synthesize comment=_comment;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end

