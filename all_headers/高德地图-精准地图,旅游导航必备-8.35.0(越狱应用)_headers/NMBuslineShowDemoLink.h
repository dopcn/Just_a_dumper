//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView;

@interface NMBuslineShowDemoLink : NSObject
{
    NMBuslineShowDemoLink *_prev;
    NMBuslineShowDemoLink *_next;
    NMBuslineShowDemoLink *_head;
    UIView *_viewData;
    _Bool _isHead;
}

@property(nonatomic) _Bool isHead; // @synthesize isHead=_isHead;
@property(retain, nonatomic) UIView *viewData; // @synthesize viewData=_viewData;
@property(retain, nonatomic) NMBuslineShowDemoLink *next; // @synthesize next=_next;
@property(retain, nonatomic) NMBuslineShowDemoLink *prev; // @synthesize prev=_prev;
- (void).cxx_destruct;
- (void)dealloc;
- (void)clearNoteAndRelease;
- (void)clearLink;
- (void)resetLink;
- (void)removeNextNode;
- (void)addLink:(id)arg1;

@end

