//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MQQPFTabItem : NSObject
{
    _Bool _showRedDot;
    NSString *_iconImageName;
    NSString *_highlightedIconImageName;
    NSString *_title;
}

@property(nonatomic) _Bool showRedDot; // @synthesize showRedDot=_showRedDot;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *highlightedIconImageName; // @synthesize highlightedIconImageName=_highlightedIconImageName;
@property(copy, nonatomic) NSString *iconImageName; // @synthesize iconImageName=_iconImageName;
- (void)dealloc;

@end

