//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString, UIImage;

@interface UCTipsMessage : NSObject
{
    NSString *_title;
    NSString *_subTitle;
    UIImage *_titleImage;
    NSArray *_actions;
}

@property(retain, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(retain, nonatomic) UIImage *titleImage; // @synthesize titleImage=_titleImage;
@property(copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)initWithActions:(id)arg1;
- (void)dealloc;

@end

