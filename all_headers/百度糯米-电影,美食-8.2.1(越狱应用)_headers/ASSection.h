//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol ASSectionContext;

@interface ASSection : NSObject
{
    long long _sectionID;
    id <ASSectionContext> _context;
}

@property(readonly, nonatomic) id <ASSectionContext> context; // @synthesize context=_context;
@property(readonly, nonatomic) long long sectionID; // @synthesize sectionID=_sectionID;
- (void).cxx_destruct;
- (id)initWithSectionID:(long long)arg1 context:(id)arg2;

@end

