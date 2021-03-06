//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ISSAuthOptions-Protocol.h"

@class NSDictionary, NSString;
@protocol ISSViewDelegate;

@interface SSAuthOptions : NSObject <ISSAuthOptions>
{
    _Bool _autoAuth;
    _Bool _allowCallback;
    _Bool _powerByHidden;
    int _viewStyle;
    NSDictionary *_scopes;
    NSDictionary *_followAccounts;
    id <ISSViewDelegate> _viewDelegate;
    id <ISSViewDelegate> _authManagerViewDelegate;
}

@property(nonatomic) id <ISSViewDelegate> authManagerViewDelegate; // @synthesize authManagerViewDelegate=_authManagerViewDelegate;
@property(nonatomic) id <ISSViewDelegate> viewDelegate; // @synthesize viewDelegate=_viewDelegate;
@property(retain, nonatomic) NSDictionary *followAccounts; // @synthesize followAccounts=_followAccounts;
@property(nonatomic) _Bool powerByHidden; // @synthesize powerByHidden=_powerByHidden;
@property(retain, nonatomic) NSDictionary *scopes; // @synthesize scopes=_scopes;
@property(nonatomic) _Bool allowCallback; // @synthesize allowCallback=_allowCallback;
@property(nonatomic) _Bool autoAuth; // @synthesize autoAuth=_autoAuth;
@property(nonatomic) int viewStyle; // @synthesize viewStyle=_viewStyle;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)clone;
- (void)dealloc;
- (id)initWithOptions:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

