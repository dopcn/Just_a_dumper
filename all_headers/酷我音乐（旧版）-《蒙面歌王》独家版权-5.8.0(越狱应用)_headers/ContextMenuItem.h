//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface ContextMenuItem : NSObject
{
    int type;
    NSString *leftText;
    UIImage *leftIcon;
    NSString *centerText;
    _Bool isChecked;
    id userInfo;
}

@property(retain, nonatomic) id userInfo; // @synthesize userInfo;
@property(nonatomic) _Bool isChecked; // @synthesize isChecked;
@property(copy, nonatomic) NSString *centerText; // @synthesize centerText;
@property(retain, nonatomic) UIImage *leftIcon; // @synthesize leftIcon;
@property(copy, nonatomic) NSString *leftText; // @synthesize leftText;
@property(nonatomic) int type; // @synthesize type;
- (void)dealloc;

@end

