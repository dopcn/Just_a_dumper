//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface JDYGlobalSearchManager : NSObject
{
}

+ (id)sharedInstance;
- (void)requestSearchResultsForKeyword:(id)arg1 ofType:(int)arg2 code:(id)arg3 callback:(CDUnknownBlockType)arg4 inUserContext:(id)arg5;
- (void)requestAssociationsForKeyword:(id)arg1 ofType:(int)arg2 callback:(CDUnknownBlockType)arg3 inUserContext:(id)arg4;
- (void)requestHotKeywordOfType:(int)arg1 callback:(CDUnknownBlockType)arg2 inUserContext:(id)arg3;
- (id)getRequestTypeFromSearchType:(int)arg1;

@end

