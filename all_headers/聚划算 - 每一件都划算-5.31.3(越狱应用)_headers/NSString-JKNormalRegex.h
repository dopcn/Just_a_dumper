//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (JKNormalRegex)
+ (_Bool)as_accurateVerifyIDCardNumber:(id)arg1;
- (_Bool)as_isIPAddress;
- (_Bool)as_bankCardluhmCheck;
- (_Bool)as_isValidWithMinLenth:(long long)arg1 maxLenth:(long long)arg2 containChinese:(_Bool)arg3 containDigtal:(_Bool)arg4 containLetter:(_Bool)arg5 containOtherCharacter:(id)arg6 firstCannotBeDigtal:(_Bool)arg7;
- (_Bool)as_isValidWithMinLenth:(long long)arg1 maxLenth:(long long)arg2 containChinese:(_Bool)arg3 firstCannotBeDigtal:(_Bool)arg4;
- (_Bool)as_isValidTaxNo;
- (_Bool)as_isValidPostalcode;
- (_Bool)as_isValidChinese;
- (_Bool)as_isValidUrl;
- (_Bool)as_isMacAddress;
- (_Bool)as_isCarNumber;
- (_Bool)as_simpleVerifyIdentityCardNum;
- (_Bool)as_isEmailAddress;
- (_Bool)as_isMobileNumber;
- (_Bool)as_isMobileNumberClassification;
- (_Bool)as_isValidateByRegex:(id)arg1;
@end

