//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AHBusinessFramework/AHRootService.h>

@class NSMutableArray;

@interface CBHotBbsListService : AHRootService
{
    NSMutableArray *_bbsList;
}

@property(retain, nonatomic) NSMutableArray *bbsList; // @synthesize bbsList=_bbsList;
- (void).cxx_destruct;
- (void)getHotBbsList;
- (_Bool)parseJSON:(id)arg1;
- (id)init;

@end

