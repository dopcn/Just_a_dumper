//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MTMYWebViewController, UIViewController;

@interface MTMYWebPageCache : NSObject
{
    MTMYWebViewController *_homePage;
    UIViewController *_entrancePage;
}

+ (id)sharedInstance;
@property(nonatomic) __weak UIViewController *entrancePage; // @synthesize entrancePage=_entrancePage;
@property(nonatomic) __weak MTMYWebViewController *homePage; // @synthesize homePage=_homePage;
- (void).cxx_destruct;

@end

