//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface CCBCommunicationUtil : NSObject
{
}

+ (id)getPostStringFromDict:(id)arg1;
+ (id)transferPostDicToEncrytDict:(id)arg1 encrytUseEsafe:(_Bool)arg2 andTxcode:(id)arg3;
+ (id)getOldUIJsonPostDict:(id)arg1 isEncryt:(_Bool)arg2;
+ (id)getNewUIJsonPostDict:(id)arg1 isEncryt:(_Bool)arg2;
+ (id)getRequestStringFromDict:(id)arg1;
+ (int)getRequestTypeForUri:(id)arg1;
+ (id)getNetErrorTitle:(id)arg1;
+ (id)getErrorMsgForTxcodeInfoIsEmpty:(id)arg1;
+ (int)getCommnunicateTypeWithHttpRequestType:(int)arg1;
+ (id)jsonString:(id)arg1;
+ (_Bool)tradeListSpecialtxcode:(id)arg1;

@end

