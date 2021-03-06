//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, UIViewController;
@protocol IMAWebOpenerDelegate;

@interface IMAAdsRenderingSettings : NSObject
{
    _Bool _enablePreloading;
    int _bitrate;
    NSArray *_mimeTypes;
    NSArray *_uiElements;
    UIViewController *_webOpenerPresentingController;
    id <IMAWebOpenerDelegate> _webOpenerDelegate;
}

@property(nonatomic) _Bool enablePreloading; // @synthesize enablePreloading=_enablePreloading;
@property(nonatomic) __weak id <IMAWebOpenerDelegate> webOpenerDelegate; // @synthesize webOpenerDelegate=_webOpenerDelegate;
@property(nonatomic) __weak UIViewController *webOpenerPresentingController; // @synthesize webOpenerPresentingController=_webOpenerPresentingController;
@property(copy, nonatomic) NSArray *uiElements; // @synthesize uiElements=_uiElements;
@property(nonatomic) int bitrate; // @synthesize bitrate=_bitrate;
@property(copy, nonatomic) NSArray *mimeTypes; // @synthesize mimeTypes=_mimeTypes;
- (void).cxx_destruct;
- (id)init;

@end

