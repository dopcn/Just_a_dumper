//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol KWLRoomCategoryDelegate;

@interface KWLRoomCategoryStruct : NSObject
{
    id <KWLRoomCategoryDelegate> _target;
    id _userData;
}

@property(nonatomic) id userData; // @synthesize userData=_userData;
@property(nonatomic) id <KWLRoomCategoryDelegate> target; // @synthesize target=_target;
- (void)clear;
- (void)dealloc;
- (id)initWith:(id)arg1 userData:(id)arg2;

@end

