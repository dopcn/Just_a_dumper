//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MttCartoonReaderBottomBar;

@protocol MttCartoonReaderBottomBarDelegate <NSObject>
- (_Bool)mttCartoonReaderBottompBarHavePre:(MttCartoonReaderBottomBar *)arg1;
- (_Bool)mttCartoonReaderBottompBarHaveNext:(MttCartoonReaderBottomBar *)arg1;
- (void)mttCartoonReaderBottompBarOnClickPre:(MttCartoonReaderBottomBar *)arg1;
- (void)mttCartoonReaderBottompBarOnClickNext:(MttCartoonReaderBottomBar *)arg1;
- (void)mttCartoonReaderBottompBar:(MttCartoonReaderBottomBar *)arg1 onSlidValueChanged:(long long)arg2;
- (void)mttCartoonReaderBottompBar:(MttCartoonReaderBottomBar *)arg1 onTouchEnd:(long long)arg2;
@end

