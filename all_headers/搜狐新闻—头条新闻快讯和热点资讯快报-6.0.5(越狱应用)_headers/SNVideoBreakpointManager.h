//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface SNVideoBreakpointManager : NSObject
{
}

+ (id)sharedInstance;
- (_Bool)breakpointExistsByVid:(id)arg1;
- (_Bool)deleteBreakpointByVid:(id)arg1;
- (float)getBreakpointByVid:(id)arg1 context:(int)arg2;
- (_Bool)addBreakpointByVid:(id)arg1 breakpoint:(double)arg2 context:(int)arg3;
- (float)getBreakpointByVid:(id)arg1;
- (_Bool)addBreakpointByVid:(id)arg1 breakpoint:(double)arg2;

@end

