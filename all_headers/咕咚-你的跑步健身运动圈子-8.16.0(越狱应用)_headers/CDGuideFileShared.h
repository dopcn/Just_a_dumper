//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CDGuideFileBaseClass;

@interface CDGuideFileShared : NSObject
{
    CDGuideFileBaseClass *_guideObject;
}

+ (id)sharedInstance;
@property(retain, nonatomic) CDGuideFileBaseClass *guideObject; // @synthesize guideObject=_guideObject;
- (void).cxx_destruct;
- (void)getGuideObjectWhenWillShowGuide;

@end

