//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIColor;

@interface JMInputConfiger : NSObject
{
    _Bool _backgroundUserInterface;
    long long _keyboardType;
    NSString *_placeholdText;
    NSString *_leftText;
    UIColor *_backgroundColor;
}

@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) _Bool backgroundUserInterface; // @synthesize backgroundUserInterface=_backgroundUserInterface;
@property(copy, nonatomic) NSString *leftText; // @synthesize leftText=_leftText;
@property(copy, nonatomic) NSString *placeholdText; // @synthesize placeholdText=_placeholdText;
@property(nonatomic) long long keyboardType; // @synthesize keyboardType=_keyboardType;
- (void).cxx_destruct;
- (id)init;

@end

