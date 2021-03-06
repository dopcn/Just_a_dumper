//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "IGAnalyticsModule-Protocol.h"
#import "IGCoreTextLinkHandler-Protocol.h"
#import "IGFacebookAuthHelperDelegate-Protocol.h"
#import "IGKeyboardObserverHideDelegate-Protocol.h"
#import "IGKeyboardObserverShowDelegate-Protocol.h"
#import "IGRegistrationLoginViewDelegate-Protocol.h"
#import "IGRetroRegistraionLoginAutoCompleteDelegate-Protocol.h"
#import "IGTextFieldDelegate-Protocol.h"

@class DMRegistrationConfig, IGFacebookAuthHelper, IGFacebookInfoFetcher, IGKeyboardObserver, IGRegistrationDeveloperOptionsView, IGRegistrationLoginView, IGRetroRegistrationLoginAutoCompleteController, NSString, UIButton;
@protocol IGAPIClient, IGRetroRegistrationLoginViewControllerDelegate;

@interface IGRetroRegistrationLoginViewController : UIViewController <IGTextFieldDelegate, IGFacebookAuthHelperDelegate, IGCoreTextLinkHandler, IGRegistrationLoginViewDelegate, IGAnalyticsModule, IGKeyboardObserverShowDelegate, IGKeyboardObserverHideDelegate, IGRetroRegistraionLoginAutoCompleteDelegate>
{
    _Bool _hasFetchedFBUserName;
    _Bool _isSwitchingUsers;
    DMRegistrationConfig *_directAppConfig;
    _Bool _isBackButtonEnabled;
    _Bool _isSubmitting;
    _Bool _isFetchingFBInfo;
    _Bool _isFetchingAutoCompleteUserInfo;
    _Bool _shouldHideStatusBar;
    id <IGRetroRegistrationLoginViewControllerDelegate> _delegate;
    unsigned long long _numLoginAttempts;
    IGRegistrationLoginView *_redesignLoginView;
    IGFacebookAuthHelper *_fbAuthHelper;
    IGFacebookInfoFetcher *_fbInfoFetcher;
    UIButton *_dismissButton;
    UIButton *_backButton;
    IGRegistrationDeveloperOptionsView *_developerOptionsView;
    id <IGAPIClient> _networker;
    IGRetroRegistrationLoginAutoCompleteController *_autoCompleteController;
    IGKeyboardObserver *_keyboardObserver;
}

@property(readonly, nonatomic) IGKeyboardObserver *keyboardObserver; // @synthesize keyboardObserver=_keyboardObserver;
@property(nonatomic) _Bool shouldHideStatusBar; // @synthesize shouldHideStatusBar=_shouldHideStatusBar;
@property(readonly, nonatomic) IGRetroRegistrationLoginAutoCompleteController *autoCompleteController; // @synthesize autoCompleteController=_autoCompleteController;
@property(retain, nonatomic) id <IGAPIClient> networker; // @synthesize networker=_networker;
@property(nonatomic) _Bool isFetchingAutoCompleteUserInfo; // @synthesize isFetchingAutoCompleteUserInfo=_isFetchingAutoCompleteUserInfo;
@property(nonatomic) _Bool isFetchingFBInfo; // @synthesize isFetchingFBInfo=_isFetchingFBInfo;
@property(retain, nonatomic) IGRegistrationDeveloperOptionsView *developerOptionsView; // @synthesize developerOptionsView=_developerOptionsView;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) UIButton *dismissButton; // @synthesize dismissButton=_dismissButton;
@property(retain, nonatomic) IGFacebookInfoFetcher *fbInfoFetcher; // @synthesize fbInfoFetcher=_fbInfoFetcher;
@property(retain, nonatomic) IGFacebookAuthHelper *fbAuthHelper; // @synthesize fbAuthHelper=_fbAuthHelper;
@property(retain, nonatomic) IGRegistrationLoginView *redesignLoginView; // @synthesize redesignLoginView=_redesignLoginView;
@property(nonatomic) unsigned long long numLoginAttempts; // @synthesize numLoginAttempts=_numLoginAttempts;
@property(nonatomic) _Bool isSubmitting; // @synthesize isSubmitting=_isSubmitting;
@property(nonatomic) _Bool isBackButtonEnabled; // @synthesize isBackButtonEnabled=_isBackButtonEnabled;
@property(nonatomic) __weak id <IGRetroRegistrationLoginViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)sendPasswordResetEmailForUser:(id)arg1;
- (void)displayToastMessage:(id)arg1;
- (void)autoCompleteController:(id)arg1 tableViewDidSelectRowWithFBUser:(id)arg2;
- (void)loginOneTapAccount:(id)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (void)autoCompleteController:(id)arg1 tableViewDidSelectRowWithOneTapLoginAccount:(id)arg2;
- (id)navState;
- (id)analyticsModule;
- (_Bool)prefersStatusBarHidden;
- (_Bool)prefersNavigationBarHidden;
- (void)loginViewDidTapForgotPasswordButton;
- (void)loginViewDidTapLoginButtonWithShowingPassword:(_Bool)arg1;
- (void)loginViewDidTapDismissButton;
- (void)loginViewDidTapSignUpButton;
- (void)loginViewDidChooseLoginWithFacebook;
- (id)createBackButton;
- (SEL)callbackForButtonType:(long long)arg1;
- (void)prefillUsername:(id)arg1;
- (void)hideAutoCompleteTableView;
- (void)fetchAutoCompleteFBUser;
- (void)fetchFBUsername;
- (void)stopFacebookButtonLoading;
- (void)startFacebookButtonLoading;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)facebookAuthHelper:(id)arg1 willResetPasswordWithIntentTarget:(id)arg2;
- (void)facebookAuthHelper:(id)arg1 willProceedTwoFactorWithInfo:(id)arg2 facebookAccessToken:(id)arg3;
- (void)facebookAuthHelper:(id)arg1 willProceedRegistrationWithFBInfo:(id)arg2 facebookAccessToken:(id)arg3;
- (void)facebookAuthHelper:(id)arg1 willProceedEmailTakenAutoLoginWithLoggedInDict:(id)arg2;
- (void)facebookAuthHelperDidTapDismissButton:(id)arg1;
- (void)facebookAuthHelperDidTapHelpButton:(id)arg1;
- (void)facebookAuthHelperDidTapLogInButton:(id)arg1;
- (void)facebookAuthHelperDidTapSignUpButton:(id)arg1;
- (void)onFacebookAuthCancelled:(id)arg1;
- (void)onFacebookAuthSuccess:(id)arg1;
- (void)authWithFacebookForRegistration;
- (void)lookupEmailForUsernameCallback:(id)arg1;
- (void)loginEmailCallback:(id)arg1;
- (void)forgotPasswordFlowCallback:(id)arg1;
- (void)facebookLoginCallback:(long long)arg1;
- (id)getErrorButtonTitle:(id)arg1;
- (void)handleLoginErrors:(id)arg1 response:(id)arg2 notification:(id)arg3 currentUserSession:(id)arg4 cookiesFromLoginResponse:(id)arg5;
- (void)loginCompletionHandlerForUser:(id)arg1 cookies:(id)arg2 dictionary:(id)arg3 error:(id)arg4 notification:(id)arg5 currentUserSession:(id)arg6;
- (void)loginFromOneClickWithUserID:(id)arg1 token:(id)arg2 source:(id)arg3 notification:(id)arg4 currentUserSession:(id)arg5;
- (void)logInWithUsernameAndPassword;
- (void)loginWithUsername:(id)arg1 password:(id)arg2;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)dismissButtonTapped;
- (void)signUpButtonTapped;
- (void)facebookButtonTapped;
- (void)loginHelperButtonTapped;
- (void)loginButtonTappedWithShowingPassword:(_Bool)arg1;
- (void)didTapBackButton;
- (void)keyboardObserverKeyboardDidShow:(id)arg1;
- (void)keyboardObserverKeyboardDidHide:(id)arg1;
- (void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)keyboardObserver:(id)arg1 keyboardWillHideWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)keyboardWillHide;
- (CDUnknownBlockType)fbAuthCompletionHandler;
- (long long)preferredStatusBarStyle;
- (void)appearedFromBackground;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithBackButtonEnabled:(_Bool)arg1 networker:(id)arg2 fbInfoFetcher:(id)arg3 isSwitchingUsers:(_Bool)arg4 directAppConfig:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

