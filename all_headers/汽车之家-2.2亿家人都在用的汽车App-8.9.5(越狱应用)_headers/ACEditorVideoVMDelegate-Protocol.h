//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSIndexPath;

@protocol ACEditorVideoVMDelegate <NSObject>
- (void)loadingViewDidClick;
- (_Bool)getHasMore;
- (NSArray *)getEditorNewsDataArray;
- (void)didSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (void)pullUpdateTriggeringWithType:(long long)arg1;
@end

