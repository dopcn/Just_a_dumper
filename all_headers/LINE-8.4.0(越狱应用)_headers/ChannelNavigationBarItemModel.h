//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ChannelNavigationBarModel, NSNumber, NSString;

@interface ChannelNavigationBarItemModel : NSObject
{
    ChannelNavigationBarModel *parentModel;
    long long actionType;
    long long orientation;
    id target;
    SEL selector;
    NSString *text;
    NSString *imgId;
    NSString *iconId;
    NSNumber *visible;
    NSNumber *enable;
    NSNumber *clickable;
}

@property(retain, nonatomic) NSNumber *clickable; // @synthesize clickable;
@property(retain, nonatomic) NSNumber *enable; // @synthesize enable;
@property(retain, nonatomic) NSNumber *visible; // @synthesize visible;
@property(retain, nonatomic) NSString *iconId; // @synthesize iconId;
@property(retain, nonatomic) NSString *imgId; // @synthesize imgId;
@property(retain, nonatomic) NSString *text; // @synthesize text;
@property(nonatomic) SEL selector; // @synthesize selector;
@property(nonatomic) __weak id target; // @synthesize target;
@property(nonatomic) long long orientation; // @synthesize orientation;
@property(nonatomic) long long actionType; // @synthesize actionType;
@property(nonatomic) __weak ChannelNavigationBarModel *parentModel; // @synthesize parentModel;
- (void).cxx_destruct;
- (id)description;
- (id)actionString;
- (id)titleBarType;
- (_Bool)isLandscape;
- (_Bool)getClickable;
- (_Bool)getEnable;
- (_Bool)getVisible;
- (id)iconNameForState:(unsigned long long)arg1;
- (id)iconImageForState:(unsigned long long)arg1;
- (id)imageNameForState:(unsigned long long)arg1;
- (id)normalImageForState:(unsigned long long)arg1;
- (id)backImageForState:(unsigned long long)arg1;
- (id)backgroundImageForState:(unsigned long long)arg1;

@end

