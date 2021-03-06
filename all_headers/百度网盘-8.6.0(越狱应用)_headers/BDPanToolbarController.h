//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BDPanToolbarDelegate-Protocol.h"

@class BDPanToolbar, NSString;
@protocol BDPanToolbarControllerDelegate;

@interface BDPanToolbarController : NSObject <BDPanToolbarDelegate>
{
    id <BDPanToolbarControllerDelegate> _delegate;
    BDPanToolbar *_toolbar;
}

@property(retain, nonatomic) BDPanToolbar *toolbar; // @synthesize toolbar=_toolbar;
@property(nonatomic) __weak id <BDPanToolbarControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)toolbar:(id)arg1 didSelectOperation:(unsigned long long)arg2;
- (_Bool)toolbar:(id)arg1 enableOperation:(unsigned long long)arg2;
- (_Bool)isToolbarVisible;
- (void)makeToolbarVisible:(_Bool)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

