//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface ChildActionHandler : NSObject
{
    ChildActionHandler *_instance;
}

+ (id)sharedInstance;
@property(retain, nonatomic) ChildActionHandler *instance; // @synthesize instance=_instance;
- (void).cxx_destruct;
- (void)jumpToUrl:(id)arg1;
- (void)jumpToShowWithShowId:(id)arg1;
- (void)excuteActionWithHAction:(id)arg1;

@end

