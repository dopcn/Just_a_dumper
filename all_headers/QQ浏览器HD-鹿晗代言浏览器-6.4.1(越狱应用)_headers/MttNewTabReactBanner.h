//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MttNewTabBanner.h"

@class MttReactNativeFileManager;

@interface MttNewTabReactBanner : MttNewTabBanner
{
    MttReactNativeFileManager *_rnFileManager;
}

@property(retain, nonatomic) MttReactNativeFileManager *rnFileManager; // @synthesize rnFileManager=_rnFileManager;
- (void).cxx_destruct;
- (void)cancelTouches;
- (void)loadConfig:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

