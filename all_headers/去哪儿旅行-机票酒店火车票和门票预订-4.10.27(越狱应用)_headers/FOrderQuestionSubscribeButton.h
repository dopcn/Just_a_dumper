//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface FOrderQuestionSubscribeButton : NSObject
{
    NSString *_name;
    NSString *_tip;
    NSNumber *_status;
    NSNumber *_mode;
    NSString *_param;
}

@property(retain, nonatomic, getter=getParam) NSString *param; // @synthesize param=_param;
@property(retain, nonatomic, getter=getMode) NSNumber *mode; // @synthesize mode=_mode;
@property(retain, nonatomic, getter=getStatus) NSNumber *status; // @synthesize status=_status;
@property(retain, nonatomic, getter=getTip) NSString *tip; // @synthesize tip=_tip;
@property(retain, nonatomic, getter=getName) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end

